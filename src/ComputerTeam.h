#ifndef COMPUTER_TEAM_H
#define COMPUTER_TEAM_H

#include "Team.h"

class ComputerTeam : public Team
{
  public:
	  
    ComputerTeam(GameMaster * inputGameMaster);
    virtual void initUnits();
    virtual void turn();
    virtual void update();
    virtual void attack();

  private:

};

#endif
