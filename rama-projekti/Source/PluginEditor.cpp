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
    setSize (965, 479);
    
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
    g.fillAll (juce::Colour::fromRGB(225, 223, 218));
 
    // round
    g.setColour (juce::Colour::fromRGB(190, 45, 45));
    g.drawEllipse (400, 250, 135, 135, 20);
    
    
   g.setColour (juce::Colour::fromRGB(225, 223, 218));
   g.drawLine (380, 384, 550, 384, 75);
   g.drawLine (397, 356, 419, 346, 17);
   g.drawLine (539, 356, 516, 346, 17);
   
    
    g.setColour (juce::Colour::fromRGB(33, 30, 22));
    
    // N = north
    // W = west
    // E = east
    // S = south
    
    // (outter x, outter y, inner x, inner y)
    
    g.drawLine (467, 235, 467, 260, 3); // N
    g.drawLine (385, 317, 410, 317, 3); // W
    g.drawLine (550, 317, 525, 317, 3); // E
    
    g.drawLine (407, 260, 427, 280, 3); // NW
    g.drawLine (437, 247, 447, 270, 2); // nnw
    g.drawLine (396, 288, 418, 298, 2); // nww
    
    g.drawLine (527, 260, 507, 280, 3); // NE
    g.drawLine (497, 247, 487, 270, 2); // nne
    g.drawLine (538, 288, 516, 298, 2); // nee
    
    // g.drawLine (467, 400, 467, 375, 3); // S
    
    // g.drawLine (409, 375, 428, 356, 3); // SW
    g.drawLine (397, 346, 419, 336, 2); // sww
    
    // g.drawLine (529, 375, 508, 356, 3); // SE
    g.drawLine (539, 346, 516, 336, 2); // see
    
    
    
    // ylävasen ulko: 467, 235 / 385, 317
    // ylävasen sisä: 467, 260 / 410, 317
 
    // set the font size and draw text to the screen
    g.setFont (15.0f);
 
}

void RamaprojektiAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    dial1.setBounds(200, 281, 75, 75);
    dial2.setBounds(400, 250, 135, 135);
    dial3.setBounds(650, 281, 75, 75);
	
    
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