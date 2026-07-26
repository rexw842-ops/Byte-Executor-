#include "lua_engine.h"
#include "bypass.h"

extern "C" {
    void initialize_payload() {
        // Initialize Lua engine
        LuaEngine engine;
        engine.init();
        
        // Apply bypass techniques
        Bypass::apply();
    }
}
