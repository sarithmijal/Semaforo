### Semáforo (Arduino)
<p>
Este código en Arduino configura un semáforo de tres luces (rojo, amarillo y verde) utilizando LEDs conectados a los pines 10, 9 y 8 de la placa. El funcionamiento del semáforo sigue un ciclo específico en el bucle loop(), donde cada luz permanece encendida durante 2 segundos antes de cambiar a la siguiente:
</p>


- Primero, enciende el LED rojo y apaga los demás.
- Luego, apaga el LED rojo y enciende el LED verde.
- Después, apaga el LED verde y enciende el LED amarillo.
- El ciclo se repite.
<p>
Este código es básico y establece un ciclo de funcionamiento para simular un semáforo básico. Cada luz permanece encendida durante el mismo tiempo antes de cambiar a la siguiente, creando una secuencia de cambio de luces similar a un semáforo de tráfico estándar.

Puedes conectar LEDs a los pines 10, 9 y 8 de tu placa Arduino para ver el funcionamiento del semáforo con este código. Además, si deseas añadir funcionalidades extras como botones para simular un semáforo real, modificar los tiempos de espera o implementar otras características, se pueden agregar al código existente.
</p>

**Integrantes:**
- Sarith Chamorro
- Jefferson Viracucha
