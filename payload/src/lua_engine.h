#ifndef LUA_ENGINE_H
#define LUA_ENGINE_H

#include <string>

class LuaEngine {
public:
    LuaEngine();
    void init();
    void execute(const std::string& script);
    
private:
    // Private members
};

#endif // LUA_ENGINE_H
