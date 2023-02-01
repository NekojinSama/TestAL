#pragma once
#include<iostream>
#include <AL/al.h>
#include <AL/alc.h>
#include <dr_lib/dr_wav.h>
#include <vector>

class AudioLoader {
public:
	void defaultDevice() {
		defaultDeviceString = alcGetString(/*device*/nullptr, ALC_DEFAULT_DEVICE_SPECIFIER);
	}

	ALCdevice* getDevice() {
		device = alcOpenDevice(defaultDeviceString);
	}


protected:
	const ALCchar* defaultDeviceString;
	ALCdevice* device;
	ALCcontext* context;
};