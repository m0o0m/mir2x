/*
 * =====================================================================================
 *
 *       Filename: clientluamodule.hpp
 *        Created: 06/25/2017 18:57:17
 *  Last Modified: 12/19/2017 22:40:41
 *
 *    Description: 
 *
 *        Version: 1.0
 *       Revision: none
 *       Compiler: gcc
 *
 *         Author: ANHONG
 *          Email: anhonghe@gmail.com
 *   Organization: USTC
 *
 * =====================================================================================
 */

#pragma once
#include "luamodule.hpp"

class ProcessRun;
class ClientLuaModule: public LuaModule
{
    public:
        ClientLuaModule(ProcessRun *, int);
       ~ClientLuaModule() = default;

    protected:
       void addLog(int, const char *);
};
