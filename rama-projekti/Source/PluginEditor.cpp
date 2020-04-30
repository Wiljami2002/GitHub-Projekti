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
    preGain.setSliderStyle (Slider::LinearBarVertical);
    preGain.setRange(0.0, 127.0, 1.0);
    preGain.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
    preGain.setPopupDisplayEnabled (false, false, this);
    preGain.setTextValueSuffix ("preGain");
    preGain.setValue(50.0);
    addAndMakeVisible (&preGain);
    
    
    postGain.setSliderStyle (Slider::LinearBarVertical);
    postGain.setRange(0.0, 127.0, 1.0);
    postGain.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
    postGain.setPopupDisplayEnabled (false, false, this);
    postGain.setTextValueSuffix ("postGain");
    postGain.setValue(50.0);
    addAndMakeVisible (&postGain);
    

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
 
    g.drawFittedText ("input Gain", 2, 0, getWidth(), 50, Justification::centred, 1);
    g.drawFittedText ("output Gain", -2, 0, getWidth(), 30, Justification::centred, 1);
}

void RamaprojektiAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    
    preGain.setBounds (40, 30, 20, getHeight() - 60);
    postGain.setBounds (140, 81, 73, getHeight() - 102);
    
}
