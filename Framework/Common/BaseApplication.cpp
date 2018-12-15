#include "BaseApplication.hpp"

// Parse command line, read configuration, initialize all sub modules
int DAIGameEngine::BaseApplication::Initialize()
{
        m_bQuit = false;

        return 0;
}

// Finalize all sub modules and clean up all runtime temporary files.
void DAIGameEngine::BaseApplication::Finalize()
{
}


// One cycle of the main loop
void DAIGameEngine::BaseApplication::Tick()
{
}

bool DAIGameEngine::BaseApplication::IsQuit()
{
        return m_bQuit;
}