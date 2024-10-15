#include "Engine.h"



int main() {




    Engine engine;
    engine.initializeVariables();
    engine.initWindow();
    engine.time();
    while (engine.running())
    {
        engine.update();
    }



    return 0;
}