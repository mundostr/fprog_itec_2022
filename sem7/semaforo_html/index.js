// Constantes y variables
const URL_WEBSOCKET = "ws://192.168.0.153:81";
const CTD_LUCES_DIURNO = 3;
const CTD_LUCES_NOCTURNO = 2;
const MTR_CAPAS_LUCES = [document.getElementById("capa_luz_roja"), document.getElementById("capa_luz_verde"), document.getElementById("capa_luz_amarilla")];
const MTR_LUCES = ["#f00", "#0f0", "#ff0"];
const MTR_LUCES_NOCTURNO = ["#ff0", "#000"];
const MTR_TIEMPOS = [2000, 4000, 1000];
const MTR_TIEMPOS_NOCTURNO = [1000, 1000];
// const MTR_LUCES_INT = ["#ff0", "#000"];
// const MTR_TIEMPOS_INT = [1000, 1000];
const BTN_MODO = document.getElementById("btn_modo");

BTN_MODO.addEventListener("click", (evento) => {
    evento.preventDefault();
    console.log("cambiar modo");
    ws.send("cambiar modo");
})

let ws;
let indice_luz = 0;

// Funciones
function inicializar_websocket() {
    ws = new WebSocket(URL_WEBSOCKET);

    ws.onopen = function() {
        console.log("Placa conectada");
     };
      
     ws.onmessage = function (evt) {
        const mensaje = evt.data;

        if (mensaje.length > 20) {
            const mensaje_json = JSON.parse(mensaje);

            BTN_MODO.innerHTML = mensaje_json.modo.toUpperCase();

            apagar_luces();
            if (MTR_CAPAS_LUCES[mensaje_json.luz_activa]) {
                MTR_CAPAS_LUCES[mensaje_json.luz_activa].style.backgroundColor = MTR_LUCES[mensaje_json.luz_activa];
            }
        }
     };
      
     ws.onclose = function() {
        console.log("Placa desconectada"); 
     };
}

function apagar_luces() {
    for (let x = 0; x < CTD_LUCES_DIURNO; x++) {
        MTR_CAPAS_LUCES[x].style.backgroundColor = "#000";
    }
}

function ciclar_luz_diurno() {
    MTR_CAPAS_LUCES[indice_luz].style.backgroundColor = MTR_LUCES[indice_luz];
    setTimeout(() => {
        indice_luz++;
        if (indice_luz == CTD_LUCES_DIURNO) indice_luz = 0;
        apagar_luces();
        ciclar_luz_diurno();
    }, MTR_TIEMPOS[indice_luz]);
}

function ciclar_luz_nocturno() {
    MTR_CAPAS_LUCES[2].style.backgroundColor = MTR_LUCES_NOCTURNO[indice_luz];
    setTimeout(() => {
        indice_luz++;
        if (indice_luz == CTD_LUCES_NOCTURNO) indice_luz = 0;
        apagar_luces();
        ciclar_luz_nocturno();
    }, MTR_TIEMPOS_NOCTURNO[indice_luz]);
}

// Flujo principal
