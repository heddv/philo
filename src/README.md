*This project has been created as part of the 42 curriculum by kislamov.*

# Description
Fract-ol renders interactive fractal sets in a graphical window.\
The program uses the mathematical properties of complex numbers to compute and display fractals pixel by pixel, coloring each point based on how quickly it diverges from the set.

## Fractals
- Mandelbrot — The most iconic fractal. For each pixel, z starts at 0 and c is the pixel's position on the complex plane. The formula z = z² + c is iterated until divergence.
- Julia — Similar to Mandelbrot, but c is a fixed parameter passed as an argument and z starts at the pixel's position. Different values of c produce radically different shapes.
- Burning Ship — A variation of Mandelbrot where absolute values are applied to the real and imaginary parts before squaring, producing a shape resembling a burning ship.

# Project structure
```bash
├── burning_ship.c
├── events.c
├── fractol.h
├── free_utils.c
├── ft_printf
│   ├── ...
├── libft
│   ├── ...
├── init.c
├── julia.c
├── main.c
├── Makefile
├── mandelbrot.c
├── mlx
│   ├── ...
├── parsing.c
├── README.md
└── utils.c
```

---

### The program supports the following controls:

| Key           | Description                             |
|:-------------:|:---------------------------------------:|
| Arrow Keys    | Move the view                 |
| Space         | Change the color of fractal             |
| Mouse Scroll  | Zoom in and out of the fractal          |
| ESC           | Exit                |
| X             | Exit                |


### Used functions
- `ft_atof` : convert string to double
- `ft_isdigit` : check valid Input : (only digit Input : is allowed)
- `ft_strcmp` : compare two strings
- `ft_memset` : initialize memory to zero
- `ft_putstr` : write a string

# Instructions

### Testing

```bash
make
./fractol mandelbrot
./fractol julia <real> <imaginary>
./fractol burning_ship
```


## Julia examples
```BASH
./fractol julia -0.4 0.6
./fractol julia 0.285 0.01
./fractol julia ....
```

### To check leaks

```bash
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./fractol mandelbrot
```
Output :
```bash
...
==1316461== HEAP SUMMARY:
==1316461==     in use at exit: 0 bytes in 0 blocks
==1316461==   total heap usage: 275 allocs, 275 frees, 109,076 bytes allocated
==1316461== 
==1316461== All heap blocks were freed -- no leaks are possible
==1316461== 
==1316461== For lists of detected and suppressed errors, rerun with: -s
==1316461== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

# Resources
YouTube videos, websites, and peer learning helped me solve the different problems i encountered.\
AI was very helpful in understanding the project and complex numbers.

### References
You can start by watching this [Youtube video](https://www.youtube.com/watch?v=wUlVFYJIUNA)

- Documentation about [minilibx](https://harm-smits.github.io/42docs/)
- Documentation about [Mandelbrot](https://en.wikipedia.org/wiki/Mandelbrot_set)
- Documentation about [Julia](https://en.wikipedia.org/wiki/Julia_set)
- Documentation about [Burning Ship](https://en.wikipedia.org/wiki/Burning_Ship_fractal)
- Interesting description on the project [fractol](https://medium.com/@jalal92/fractol-22a21a1ad5bd)
