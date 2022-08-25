# fprog_itec_2022
### ADIMRA - Asociación de Industriales Metalúrgicos de la República Argentina
### ITEC - Fundación Instituto Tecnológico Rafaela
### Curso Fundamentos de Programación 2022 - grupo Rafaela

### Resumen IDEs

Como mencionamos, existen muchas opciones de entornos de desarrollo para C/C++. Hemos comenzado con **Dev C++**, ya que es una alternativa muy rápida y directa de instalación, pero veremos también otras dos alternativas con las cuales trabajar:

* Visual Studio Code (VSC).
* Visual Studio (Community Edition) (VS).

Si bien los nombres son muy similares -y en ambos casos se trata de productos de Microsoft- son proyectos muy diferentes; Visual Studio Code es un IDE de código abierto (open source) mientras que Visual Studio no lo es. No obstante, la versión Community de VS puede descargarse y utilizarse sin costo alguno.

VSC ocupará mucho menos espacio en disco y será más liviano en general para trabajar, no obstante VS será muy completo y permitirá gestionar ciertos ajustes de manera más automática. Por supuesto, en cualquiera de los dos es simple probar y desinstalar si el sistema no cumple las expectativas o simplemente ya no se lo necesita.

VISUAL STUDIO CODE PARA C++ BAJO WINDOWS:

1. **Instalar compilador C++**: en una instalación tradicional de Windows, no se encuentran todas las herramientas necesarias para la compilación de código C++, por ende lo primero que haremos es instalar un set de estos programas. Descargar el archivo llamado mingw64.zip desde la carpeta instaladores en este mismo repo, y extraerlo en una nueva carpeta en la máquina local, con el nombre que se desee. Tomar nota de este nombre, por ejemplo C:\mingw64.

2. **Agregar la ruta de mingw64 al path del sistema**: buscar en la barra de herramientas de Windows el texto "variables de entorno" (sin las comillas), se encontrará una opción llamada Editar variables de entorno del sistema. Abrir esta ventana e ingresar al botón Variables de entorno. En el cuadro INFERIOR de los dos que aparecen, buscar la variable "Path" (sin las comillas) y hacer doble click para editarla. Aparecerán distintas rutas cargadas actualmente, acceder al botón Nuevo y pegar una nueva ruta con el valor agendado en el punto 1 (C:\mingw64 o el que fuere). Aceptar las diferentes ventanas hasta cerrar todo.

2. **Instalar VSC tradicional**: dirigirse a https://code.visualstudio.com y descargar un instalador para Windows de 32 o 64 bit según se necesite. Siguiendo el asistente y aceptando las configuraciones sugeridas, el programa quedará instalado en cuestión de un par de minutos, y se tendrá el típico ícono de acceso en el Escritorio del sistema.

3. **Instalar VSC autónomo**: como variante, si se desea tener una instalación completamente autónoma de VSC, se puede realizar una descarga alternativa en https://code.visualstudio.com/#alt-downloads, bajando el archivo ZIP (de 32 o 64 bit) para Windows. 

Extraer este archivo en una nueva carpeta con el nombre que se quiera. Se tendrá dentro todo lo necesario para trabajar, pudiendo iniciar el IDE ejecutando el archivo Code.exe que aparecerá allí. Dentro de esa misma carpeta y ANTES de ejecutar el IDE por primera vez, se deberá crear otra carpeta VACIA, con el nombre "data" (sin las comillas). Ahora sí, al abrir Code.exe, el sistema iniciará el IDE pero detectará la subcarpeta data y guardará todas las configuraciones allí (extensiones instaladas, configs de usuario, etc), con lo cual esa instalación de VSC quedará completamente independiente de otras que puedan instalarse en la misma máquina.

Ambas opciones funcionan, la instalación independiente es cómoda en caso de utilizar la misma máquina para el aprendizaje de distintos lenguajes o el trabajo en diferentes proyectos. Cada instalación tendrá su propio conjunto de configuraciones y no afectará a las otras.

4. **Habilitar plugins en VSC**: precisamente uno de los puntos fuertes de VSC, es su estructura de plugins (extensiones), que permite personalizar y potenciar el IDE para el tipo de lenguaje y rubro en el que deseemos trabajar. Para codificar de manera más cómoda en C++, comenzar instalando el plugin oficial de Microsoft llamado **C/C++ Intellisense, debugging, and code browsing**. Por supuesto existen muchos plugins interesantes, pero este plugin es más que suficiente y útil para comenzar.

5. **Activar una tarea (task) de VSC, para facilitar la compilación**: siempre se sugiere disponer de una carpeta general donde ir colocando todos los códigos que se vayan escribiendo (puede ser por ejemplo C:\codigos_cpp o la ubicación y nombre que se quieran). Desde VSC, se utilizará directamente la opción Abrir Carpeta (Open Folder) y se abrirá esta carpeta completa. Lógicamente podrán crearse dentro otras carpetas según se necesite para ir ordenando el aprendizaje, pero todo lo relacionado a escritura de código C++, quedará en un solo lugar.

En esta carpeta general, crear una llamada ".vscode" (sin las comillas, notar el punto al principio del nombre), y dentro un archivo llamado tasks.json. El contenido de tasks.json será el siguiente:

```
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe compilar archivo activo",
            "command": "C:\\mingw64\\bin\\g++.exe",
            "args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "Tarea generada por el depurador."
        }
    ],
    "version": "2.0.0"
}
```

El contenido de la línea "command", deberá coincidir con la ruta donde se instaló el compilador en el punto 1.

A partir de este momento, cualquier archivo de C++ (extensión .cpp) creado en esta carpeta principal o en una subcarpeta dentro de ella, podrá compilarse presionando CTRL SHIFT B. Si el nombre del archivo es proyecto1.cpp, luego de compilar aparecerá junto a él otro archivo proyecto1.exe, que podrá ejecutarse.

Para ejecutar dentro del mismo VSC, puede abrirse una consola (Ver -> Terminal / View -> Terminal) estando en la carpeta correspondiente, escribir el nombre del archivo exe y presionar ENTER para ejecutarlo.


VISUAL STUDIO COMMUNITY PARA C++ BAJO WINDOWS:

El instalador oficial de la versión Community, se puede obtener desde la página de Microsoft: https://visualstudio.microsoft.com/es/vs/community/, y a partir de allí, seguir las instrucciones para la instalación. El propio sistema cuenta con un gestor que permitirá instalar o desinstalar módulos para acondicionar el entorno a lo que se necesite, como por ejemplo la escritura de C++ en este caso.

Como ya mencionamos, esta opción es muy cómoda ya que no deben activarse configuraciones manualmente, no obstante se ocupará mucho mayor espacio de disco y recursos, por la cual es conveniente evaluarla en una máquina relativamente nueva, y si ya no se la utiliza, desinstalarla por completo.
