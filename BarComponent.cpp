#include "BarComponent.h"
#include <iostream>

BarComponent::BarComponent(){}

BarComponent::~BarComponent(){}

void BarComponent::paint(juce::Graphics& g)
{
  /*juce::Rectangle<float> rect(40.f,40.f,10.f,10.f);
  g.setColour(juce::Colours::white);
  g.fillRect(rect);
  g.drawRect(rect);*/
  g.fillAll(juce::Colours::black); 
    
  /*g.setColour(juce::Colours::white);
    
  juce::Path border;
    
  border.setUsingNonZeroWinding(false);
  auto bounds = getLocalBounds();
  bounds.removeFromBottom(1);
  border.addRoundedRectangle(bounds, 4);
  border.addRectangle(bounds);
    
  g.setColour(juce::Colours::white);
    
  g.fillPath(border);*/
   
  g.setColour(juce::Colours::orange);
  g.drawRoundedRectangle(getLocalBounds().toFloat(), 4.f, 1.f);
}