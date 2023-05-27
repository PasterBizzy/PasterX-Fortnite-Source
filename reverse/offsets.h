#pragma once
#pragma once
#include <Windows.h>
#define OFFSET_UWORLD 0x102f69d8 //
//

namespace OFFSETS


{
    uintptr_t Gameinstance = 0x1b8;
    uintptr_t LocalPlayers = 0x38;
    uintptr_t PlayerController = 0x30;
    uintptr_t LocalPawn = 0x330;
    uintptr_t PlayerState = 0x2a8;
    uintptr_t RootComponet = 0x190;
    uintptr_t GameState = 0x158;
    uintptr_t PersistentLevel = 0x30;

    uintptr_t ActorCount = 0xA0;
    uintptr_t Cameramanager = 0x340;
    uintptr_t AActor = 0x98;
    uintptr_t CurrentActor = 0x8;
    uintptr_t Mesh = 0x310;
    uintptr_t Revivefromdbnotime = 0x4530;
    uintptr_t TeamId = 0x10B0;
    uintptr_t ActorTeamId = 0x10B0;

    uintptr_t LocalActorPos = 0x128;
    uintptr_t ComponetToWorld = 0x240;
    uintptr_t BoneArray = 0x5f0;
    uintptr_t Velocity = 0xb8;
    uintptr_t PawnPrivate = 0x300;
    uintptr_t PlayerArray = 0x2a0;
    uintptr_t relativelocation = 0x2E8;
    uintptr_t UCharacterMovementComponent = 0x318;//havent got
    uintptr_t entity_actor = 0x310;//havent got
    uintptr_t bIsReloadingWeapon = 0x331;
    uintptr_t GlobalAnimRateScale = 0xa58;
    uintptr_t CurrentWeapon = 0x908;
}