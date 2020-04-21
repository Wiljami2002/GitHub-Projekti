/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
RamaprojektiAudioProcessorEditor::RamaprojektiAudioProcessorEditor (RamaprojektiAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (800, 200);
    
        // these define the parameters of our slider object
    audioVolume.setSliderStyle (Slider::LinearBarVertical);
    audioVolume.setRange(0.0, 127.0, 1.0);
    audioVolume.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
    audioVolume.setPopupDisplayEnabled (false, false, this);
    audioVolume.setTextValueSuffix ("inputGain");
    audioVolume.setValue(50.0);
    addAndMakeVisible (&audioVolume);
    

}

RamaprojektiAudioProcessorEditor::~RamaprojektiAudioProcessorEditor()
{
}

//==============================================================================
void RamaprojektiAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
       // fill the whole window white
    g.fillAll (Colours::white);
 
    // set the current drawing colour to black
    g.setColour (Colours::black);
 
    // set the font size and draw text to the screen
    g.setFont (15.0f);
 
    g.drawFittedText ("input Gain", 0, 0, getWidth(), 30, Justification::centred, 1);
}

void RamaprojektiAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    
    audioVolume.setBounds (40, 30, 20, getHeight() - 60);
    
}
