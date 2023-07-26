#pragma once
#include <Windows.h>

#define GWorld 0xEE2F8E8
#define VIEW_POINT 0xED57310


namespace OFFSETS
{
    uintptr_t ViewPoint = 0xED57310;
    uintptr_t UWorld = 0xEE2F8E8;
    uintptr_t Gameinstance = 0x1b8;
    uintptr_t LocalPlayers = 0x38;
    uintptr_t PlayerController = 0x30;
    uintptr_t LocalPawn = 0x338;
    uintptr_t PlayerState = 0x2B0;
    uintptr_t PlayerArray = 0x02a0;
    uintptr_t RootComponet = 0x198;
    uintptr_t GameState = 0x158;
    uintptr_t PersistentLevel = 0x30;

    uintptr_t ActorCount = 0xA0;
    uintptr_t Cameramanager = 0x348;
    uintptr_t AActor = 0x98;
    uintptr_t CurrentActor = 0x8;
    uintptr_t Mesh = 0x318;
    uintptr_t Revivefromdbnotime = 0x46b8;
    uintptr_t TeamId = 0x10D0;
    uintptr_t ActorTeamId = 0x10D0; 

    uintptr_t LocalActorPos = 0x128;
    uintptr_t ComponetToWorld = 0x240;
    uintptr_t BoneArray = 0x600;
    uintptr_t Bonecache = 0x648;
    uintptr_t Velocity = 0xb8;
    uintptr_t PawnPrivate = 0x308;
    uintptr_t IsCached = 0x648;
    uintptr_t CurrentVehicle = 0x2590;
    uintptr_t WorldSettings = 0x2A0;
    uintptr_t LastSubmitTime = 0x360;
    uintptr_t LastRenderTimeOnScreen = 0x368;
    uintptr_t relativelocation = 0x128;
    uintptr_t UCharacterMovementComponent = 0x318;//havent got
    uintptr_t entity_actor = 0x310;//havent got
    uintptr_t bIsReloadingWeapon = 0x358;
    uintptr_t GlobalAnimRateScale = 0xA80;
    uintptr_t CurrentWeapon = 0x948;
}
