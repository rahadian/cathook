/*
 * interfaces.h
 *
 *  Created on: Oct 3, 2016
 *      Author: nullifiedcat
 */

#ifndef INTERFACES_H_
#define INTERFACES_H_

namespace vgui {
class ISurface;
class IPanel;
}

class ISteamClient017;
class ISteamFriends002;
class IVEngineClient013;
class IClientEntityList;
class ICenterPrint;
class ICvar;
class IGameEventManager2;
class IBaseClientDLL;
class ClientModeShared;
class IEngineTrace;
class IVModelInfoClient;

namespace interfaces {

extern ISteamClient017* steamClient;
extern ISteamFriends002* steamFriends;
extern IVEngineClient013* engineClient;
extern vgui::ISurface* surface;
extern vgui::IPanel* panel;
extern IClientEntityList* entityList;
extern ICenterPrint* centerPrint;
extern ICvar* cvar;
extern IGameEventManager2* eventManager;
extern IBaseClientDLL* baseClient;
extern IEngineTrace* trace;
extern IVModelInfoClient* model;

void CreateInterfaces();

}

#endif /* INTERFACES_H_ */