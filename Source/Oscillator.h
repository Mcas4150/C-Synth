/*
  ==============================================================================

    Oscillator.h
    Created: 12 Aug 2018 8:46:22pm
    Author:  Michael Cassidy

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class Oscillator    : public Component,
private ComboBox::Listener
{
public:
    Oscillator();
    ~Oscillator();

    void paint (Graphics&) override;
    void resized() override;
    
    void comboBoxChanged(ComboBox*) override;

private:
    
    ComboBox oscMenu;
     ScopedPointer<AudioProcessorValueTreeState::ComboBoxAttachment> waveSelection;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Oscillator)
};
