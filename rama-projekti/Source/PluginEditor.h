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
   void sliderValueChanged(Slider* sliderThatHasChanged) ;
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    
    
    RamaprojektiAudioProcessor& processor;
    
    Slider dial1;
    Slider dial2;
    Slider dial3;
   
    
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RamaprojektiAudioProcessorEditor)
};
