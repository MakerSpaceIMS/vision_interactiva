# vision_interactiva
Proyecto educativo STEAM que utiliza un Arduino Leonardo como dispositivo HID (teclado USB) para activar sonidos en Scratch, diseñados para proporcionar información auditiva a personas con discapacidad visual
____Descripción del Proyecto
Este repositorio contiene el código necesario para convertir una maqueta física interactiva en una interfaz accesible.
El sistema funciona de la siguiente manera:
Un usuario presiona un botón físico conectado al Arduino.
El Arduino Leonardo detecta la pulsación.
Mediante la librería Keyboard.h, el Arduino emula la presión de una tecla del teclado (a–r).
Scratch interpreta esa tecla y reproduce un sonido previamente programado.
El sonido contiene información relevante (problemas visuales o partes del ojo).
____Objetivo principal:
Desarrollar una herramienta educativa inclusiva que permita a personas con discapacidad visual interactuar con maquetas físicas mediante retroalimentación auditiva.
____Materiales Necesarios:
1 × Arduino Leonardo
18 × Pulsadores (botones)
Cables Dupont
Tornillos o materiales metalicos que permitan la interación tactil
Computadora con:
IDE de Arduino
Scratch (versión en línea o de escritorio)
Bocinas o audífonos
____Funcionamiento del Código
Configuración de Pines
Se utilizan los pines digitales del 2 al 19:
Pin	Tecla simulada
2	a
3	b
4	c
...	...
18	r
Cada pin está configurado como pinMode(pinX, INPUT_PULLUP);
Esto significa que el pin permanece en estado ALTO (HIGH), cuando el botón se presiona y conecta a GND → cambia a BAJO (LOW)
Emulación de Teclado: Cuando un pin detecta estado LOW:
Keyboard.press('a');
delay(100);
Keyboard.release('a');
Esto simula la presión de la tecla
Espera 100 ms (anti-rebote), libera la tecla
-Conexión de los Botones
Cada botón debe conectarse:
Un extremo al pin digital correspondiente y el otro extremo a GND
No se requieren resistencias externas gracias al uso de INPUT_PULLUP.
____Configuración en Scratch:
En Scratch:
Crear fondos que cambiaran de acuerdo a la "tecla presionada".
Programar bloques tipo:
cuando tecla [a] presionada reproducir sonido [descripción]
Asignar un sonido diferente a cada tecla.
