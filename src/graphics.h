#ifndef TMR4160_GRAPHICS_H
#define TMR4160_GRAPHICS_H

void graphics_init(void *(*loadProc)(const char *name));

void graphics_reload();

void graphics_update();

void graphics_setBoatPosition(float position);

#endif //TMR4160_GRAPHICS_H
