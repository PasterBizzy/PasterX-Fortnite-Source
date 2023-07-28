#pragma once
bool lobby = false;
bool fuel = false; //Heres Where All The Definitions Are Placed
bool exploitss = false;
bool particles = false;
bool animate = false;

bool nazi2 = true;
bool threed = false;
bool filledsqr = true;
bool fovcircle = false;
bool targetlines = true;
bool ShowMenu = true;
bool Esp = true;
bool Esp_box = true;
bool cornerbox = false;
bool Esp_info = true;
bool Esp_line = false;
bool Aimbot = true;
bool Skeleton = false;
bool slefESP = false;
bool square_fov = false;
bool weaponesp = true;
bool ammoESP = false;
bool AimWhileJumping = false;
bool Esp_Distance = true;
bool carFly = false;
bool niggerfovchanger = false;
bool RapidFire = false;
bool spinbot = false;
bool boatspeed = false;
bool bostspeed = false;
bool carto = false;
bool Safemode = true;
bool reloadcheck = true;
bool fillbox = false;
bool fovcirclefilled = false;
bool lineheadesp = false;
bool cornerline = false;
float BoxWidthValue = 0.550;



float ChangerFOV = 80;




ImFont* m_pFont;
float smooth = 5;
static int VisDist = 100;
float AimFOV = 150;
static int aimkey;
static int hitbox;
static int hitboxpos = 0;





DWORD_PTR Uworld;
DWORD_PTR LocalPawn;
DWORD_PTR PlayerState;
DWORD_PTR Localplayer;
DWORD_PTR Rootcomp;
DWORD_PTR PlayerController;
DWORD_PTR Persistentlevel;
uintptr_t PlayerCameraManager;
Vector3 localactorpos;

uint64_t TargetPawn;
int localplayerID;