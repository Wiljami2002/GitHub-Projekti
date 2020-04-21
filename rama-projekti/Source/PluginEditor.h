/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class RamaprojektiAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    RamaprojektiAudioProcessorEditor (RamaprojektiAudioProcessor&);
    ~RamaprojektiAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    
    
    RamaprojektiAudioProcessor& processor;
    
    Slider audioVolume; // [1]
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RamaprojektiAudioProcessorEditor)
};
