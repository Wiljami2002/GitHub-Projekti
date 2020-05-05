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
    
    dial1.setSliderStyle (Slider::Rotary);
    dial1.setTextBoxStyle (Slider::NoTextBox, false, 0, 0);
    dial1.setRotaryParameters(1, 180, 359);	
    dial1.setRange(1, 10, 1);
    addAndMakeVisible (dial1);
    
    
    dial2.setSliderStyle (Slider::Rotary);
    dial2.setTextBoxStyle (Slider::NoTextBox, false, 0, 0);
    dial2.setRotaryParameters(1, 180, 359);	
    dial2.setRange(1, 10, 1);
    addAndMakeVisible (dial2);
    
    dial3.setSliderStyle (Slider::Rotary);
    dial3.setTextBoxStyle (Slider::NoTextBox, false, 0, 0);
    dial3.setRotaryParameters(1, 180, 359);	
    dial3.setRange(1, 10, 1);
    addAndMakeVisible (dial3);
    
    
   
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
 
}

void RamaprojektiAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    dial1.setBounds(100, 50, 150, 50);
    dial2.setBounds(100, 100, 200, 100);
    dial3.setBounds(100, 150, 250, 150);
	
    
}
void RamaprojektiAudioProcessorEditor::sliderValueChanged(Slider *slider)
{
	if (&dial1 == slider) 
	{
	    dial1.getValue();
	}
	if (&dial2 == slider)
	{
	    dial2.getValue();
	}
}