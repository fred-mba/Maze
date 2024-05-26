#include <SDL2/SDL/h>
#include "main.h"
/**
 * poll_events - retrieves pending events.
 *
 * Return: returns 0 on success, otherwise err.
 */
int poll_events()
{
	SDL_Event event;
	SDL_KeyboardEvent key;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			return (1);
		case KEY_DOWN:
			key = event.key;
			if (key.keysym.scancode == 0x29)
				return (1);
			break
		}
	}
	return (0);
}