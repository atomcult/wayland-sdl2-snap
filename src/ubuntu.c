#include "raylib.h"
#include "logo.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "SDL2 + Wayland Test");
    SetTargetFPS(60);

    Image img;
    img.format  = LOGO_FORMAT;
    img.height  = LOGO_HEIGHT;
    img.width   = LOGO_WIDTH;
    img.data    = LOGO_DATA;
    img.mipmaps = 1;

    Texture2D logo = LoadTextureFromImage(img);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawTexture(
                logo,
                (GetRenderWidth()  - logo.width)/2,
                (GetRenderHeight() - logo.height)/2,
                WHITE);

        EndDrawing();
    }

    UnloadTexture(logo);
    CloseWindow();

    return 0;
}
