/*
  ==============================================================================

    SynthSound.h
    Created: 10 Aug 2018 10:50:16pm
    Author:  Michael Cassidy

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "maximilian.h"


class SynthSound : public SynthesiserSound
{
public:
    
    bool appliesToNote (int /*midiNoteNumber*/)
    {
        return true;
    }

    bool appliesToChannel (int /*midiChannel*/)
    {
        return true;
    }
};
