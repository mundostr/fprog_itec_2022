# fprog_itec_2022
### ADIMRA - Asociación de Industriales Metalúrgicos de la República Argentina
### ITEC - Fundación Instituto Tecnológico Rafaela
### Curso Fundamentos de Programación 2022 - grupo Rafaela

### RESUMEN IDEs

Como mencionamos, existen muchas opciones de entornos de desarrollo para C/C++. Hemos comenzado con **Dev C++**, ya que es una alternativa muy rápida y directa de instalación, pero veremos también otras dos alternativas con las cuales trabajar:

* Visual Studio Code (VSC).
* Visual Studio (Community Edition) (VS).

Si bien los nombres son muy similares -y en ambos casos se trata de productos de Microsoft- son proyectos muy diferentes; Visual Studio Code es un IDE de código abierto (open source) mientras que Visual Studio no lo es. No obstante, la versión Community de VS puede descargarse y utilizarse sin costo alguno.

VSC ocupará mucho menos espacio en disco y será más liviano en general para trabajar, no obstante VS será muy completo y permitirá gestionar ciertos ajustes de manera más automática. Por supuesto, en cualquiera de los dos es simple probar y desinstalar si el sistema no cumple las expectativas o simplemente ya no se lo necesita.

### VISUAL STUDIO CODE PARA C++ BAJO WINDOWS:

1. **Instalar compilador C++**: en una instalación tradicional de Windows, no se encuentran todas las herramientas necesarias para la compilación de código C++, por ende lo primero que haremos es instalar un set de estos programas. Descargar el archivo llamado mingw64.zip desde la carpeta instaladores en este mismo repo, y extraerlo en una nueva carpeta en la máquina local, con el nombre que se desee. Tomar nota de este nombre, por ejemplo C:\mingw64.

2. **Agregar la ruta de mingw64 al path del sistema**: buscar en la barra de herramientas de Windows el texto "variables de entorno" (sin las comillas), se encontrará una opción llamada Editar variables de entorno del sistema. Abrir esta ventana e ingresar al botón Variables de entorno. En el cuadro INFERIOR de los dos que aparecen, buscar la variable "Path" (sin las comillas) y hacer doble click para editarla. Aparecerán distintas rutas cargadas actualmente, acceder al botón Nuevo y pegar una nueva ruta con el valor agendado en el punto 1 (C:\mingw64 o el que fuere). Aceptar las diferentes ventanas hasta cerrar todo.

3. **Instalar VSC tradicional**: dirigirse a https://code.visualstudio.com y descargar un instalador para Windows de 32 o 64 bit según se necesite. Siguiendo el asistente y aceptando las configuraciones sugeridas, el programa quedará instalado en cuestión de un par de minutos, y se tendrá el típico ícono de acceso en el Escritorio del sistema.

4. **Instalar VSC autónomo**: como variante, si se desea tener una instalación completamente autónoma de VSC, se puede realizar una descarga alternativa en https://code.visualstudio.com/#alt-downloads, bajando el archivo ZIP (de 32 o 64 bit) para Windows. 

Extraer este archivo en una nueva carpeta con el nombre que se quiera. Se tendrá dentro todo lo necesario para trabajar, pudiendo iniciar el IDE ejecutando el archivo Code.exe que aparecerá allí. Dentro de esa misma carpeta y ANTES de ejecutar el IDE por primera vez, se deberá crear otra carpeta VACIA, con el nombre "data" (sin las comillas). Ahora sí, al abrir Code.exe, el sistema iniciará el IDE pero detectará la subcarpeta data y guardará todas las configuraciones allí (extensiones instaladas, configs de usuario, etc), con lo cual esa instalación de VSC quedará completamente independiente de otras que puedan instalarse en la misma máquina.

Ambas opciones funcionan, la instalación independiente es cómoda en caso de utilizar la misma máquina para el aprendizaje de distintos lenguajes o el trabajo en diferentes proyectos. Cada instalación tendrá su propio conjunto de configuraciones y no afectará a las otras.

5. **Habilitar plugins en VSC**: precisamente uno de los puntos fuertes de VSC, es su estructura de plugins (extensiones), que permite personalizar y potenciar el IDE para el tipo de lenguaje y rubro en el que deseemos trabajar. Para codificar de manera más cómoda en C++, comenzar instalando el plugin oficial de Microsoft llamado **C/C++ Intellisense, debugging, and code browsing**. Por supuesto existen muchos plugins interesantes, pero este plugin es más que suficiente y útil para comenzar.

6. **Activar una tarea (task) de VSC, para facilitar la compilación**: siempre se sugiere disponer de una carpeta general donde ir colocando todos los códigos que se vayan escribiendo (puede ser por ejemplo C:\codigos_cpp o la ubicación y nombre que se quieran). Desde VSC, se utilizará directamente la opción Abrir Carpeta (Open Folder) y se abrirá esta carpeta completa. Lógicamente podrán crearse dentro otras carpetas según se necesite para ir ordenando el aprendizaje, pero todo lo relacionado a escritura de código C++, quedará en un solo lugar.

En esta carpeta general, crear una llamada ".vscode" (sin las comillas, notar el punto al principio del nombre), y dentro un archivo llamado tasks.json. El contenido de tasks.json será el siguiente:

```
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: g++.exe compilar archivo activo",
            "command": "C:\\mingw64\\bin\\g++.exe",
            "args": [
                "--std",
                "c++17",
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

### VISUAL STUDIO COMMUNITY PARA C++ BAJO WINDOWS:

El instalador oficial de la versión Community, se puede obtener desde la página de Microsoft: https://visualstudio.microsoft.com/es/vs/community/, y a partir de allí, seguir las instrucciones para la instalación. El propio sistema cuenta con un gestor que permitirá instalar o desinstalar módulos para acondicionar el entorno a lo que se necesite, como por ejemplo la escritura de C++ en este caso.

Como ya mencionamos, esta opción es muy cómoda ya que no deben activarse configuraciones manualmente, no obstante se ocupará mucho mayor espacio de disco y recursos, por la cual es conveniente evaluarla en una máquina relativamente nueva, y si ya no se la utiliza, desinstalarla por completo.

### ALTERNATIVAS PARA ENTORNOS DE DESARROLLO / PRUEBAS:

Al momento de aprender y desarrollar, sea con C++ u otros lenguajes, existen diferentes opciones para preparar el entorno de trabajo:

1. **Editor o IDE en instalación convencional**: esta es la alternativa habitual al comenzar, como hemos hecho en este caso al instalar DevC++ y luego Visual Studio Code. Es sencilla y rápida, no obstante con el tiempo y las diferentes pruebas que se van acumulando, el sistema general comienza a "ensuciarse", aparecen conflictos de librerías, configuraciones y otras, se vuelve complejo mantener la estructura de trabajo ordenada.

2. **Editor o IDE en instalación autónoma**: algunas herramientas, como Visual Studio Code, ofrecen la posibilidad de ser instaladas de manera autónoma (ver más arriba punto 4 VSC Autónomo). Esto quiere decir que todas las configuraciones de usuario, extensiones y demás, quedarán en un único directorio. De esa manera podremos tener varias instalaciones (por ejemplo una de C++, otra de Python y otra de Javascript) completamente independientes. Se tiende a ocupar espacio extra, ya que cada instalación contiene todo el paquete de herramientas, pero en casos como VSC, ese espacio no es elevado y permite separar mejor las cosas. Otra ventaja es la de poder trasladar el entorno de trabajo de un equipo a otro, copiando simplemente un directorio.

3. **Editor o IDE online**: existen muchas herramientas que nos permiten disponer de un entorno de trabajo directamente en la nube, sin necesidad de instalar nada de forma local y poder testear código rápidamente. Cuál utilizar, dependerá de gustos y fundamentalmente, del lenguaje en el que se desee trabajar, si bien muchas soportan diferentes lenguajes. Hay IDEs online muy prácticos como **https://repl.it** o **https://ide.geeksforgeeks.org/** por ejemplo, que pueden usarse gratuitamente, u otros como codepen, codesandbox, goorm, coder o codeanywhere por nombrar algunos. Chequear las herramientas brindadas por cada uno para el lenguaje en el que se necesita codificar.

4. **Entornos virtuales**: un entorno virtual, es otra forma de separar distintas instalaciones y configuraciones, para evitar conflictos de librerías y ajustes. Dependiendo del lenguaje, puede resultar más o menos cómodo, no es tan simple al principio hacerlo para C++, sí para Python por ejemplo, que cuenta con una librería muy popular, llamada precisamente **virtualenv**, con la cual se pueden crear entornos de forma rápida y simple. Una vez creado un entorno, se lo puede activar para trabajar en él, a partir de allí, cualquier instalación de librería, ajustes de variables de sistema, etc, será válida solo para ese entorno. Cuando se termine la labor, se desactiva el entorno, y se puede generar un entorno completamente nuevo para otro proyecto, con un paquete de ajustes totalmente distinto. Como mencionamos, no es tan sencillo para el iniciante en el caso de C++, por lo cual sugerimos para los primeros desarrollos la opción 2 de IDE Autónomo.

5. **Máquinas virtuales**: una máquina virtual, es una emulación de un sistema dentro de otro, por ejemplo, poder correr una distribución Ubuntu de Linux dentro de Windows, o viceversa. No es estrictamente necesario para generar un entorno de programación, pero sí es útil si se quiere testear algún nuevo sistema, sin instalarlo desde cero en su propia unidad de disco, particionando y demás. Muchos iniciantes en programación, cuentan con experiencia bajo Windows pero no bajo sistemas Linux, esta es una alternativa para probar. El inconveniente con las máquinas virtuales es que la emulación se realiza por software y a alto nivel, con lo cual se consumen recursos, es decir, se necesita una computadora con buena capacidad para poder correr una máquina virtual que funcione con buenas prestaciones. Por supuesto, la cantidad de recursos dependerá de los límites que se decida aplicar a la máquina virtual (procesador, memoria ram, espacio de disco, etc), pero en general esa es la situación. Entre los programas más conocidos para manejo de máquinas virtuales, podemos citar a **VMWare, VirtualBox, Oracle VM y Qemu** por ejemplo.

6. **Máquinas virtuales de bajo nivel**: si se desea ir un paso más allá con las máquinas virtuales, se puede utilizar un gestor de bajo nivel. Existen distribuciones de Linux dedicadas al manejo de máquinas virtuales, como por ejemplo **Proxmox Virtual Environment (https://www.proxmox.com/en/)**, que opera de manera muy eficiente y puede descargarse sin costo. La idea es la misma, se podrá usar cualquier imagen válida de sistema operativo y configurar una máquina virtual para ella, asignando la cantidad de recursos que se desee, obviamente dentro de los límites generales del hardware que se tenga. La diferencia con los programas de virtualización tradicionales, es que en este caso el propio sistema operativo está dedicado por completo a la gestión de las VM, con lo cual se logra otro nivel de rendimiento y control. El punto negativo es que se necesita algo más de tiempo y experiencia para ponerlo a funcionar, además, por supuesto, de una máquina (o al menos un disco rígido) por separado para poder aprovecharlo.

7. **Docker**: Docker es otra opción muy utilizada en la programación actual. Se trata también de un concepto de virtualización pero a través de contenedores. Estos contenedores permiten correr imágenes de diferentes herramientas sobre un mismo sistema, pudiendo ser completamente independientes, y gestionándose con facilidad. Similar a las máquinas virtuales, se pueden descargar en el equipo local diferentes imágenes para distintos propósitos, iniciando y deteniendo las que se necesite en cada momento. Puede verse más información sobre su funcionamiento en la página oficial **https://www.docker.com/** y buscar entre miles de imágenes prearmadas en el Hub **https://hub.docker.com/**. Como otras soluciones, permite ejecutar instrucciones desde línea de comandos y cuenta además con alternativas de interfaces visuales para su gestión. Es una variante muy poderosa también para distribuir software, ya que un contenedor permite reunir todo lo necesario, asegurando que no existirán conflictos de versiones de librerías, configuraciones y demás. Nuevamente, es una muy buena herramienta pero no tan simple de comprender para el iniciante, por lo cual se sugiere comenzar a desarrollar con otras opciones e ir probándola paulatinamente.
