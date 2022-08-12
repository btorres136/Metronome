#include "SliderComponent.h"
#include "juce_core/juce_core.h"
#include "juce_gui_basics/juce_gui_basics.h"

SliderComponent::SliderComponent()
{
  auto setUpSlider = [this] (Slider& slider, Slider::SliderStyle style,
                                       double start, double end, double interval)
  {
    slider.setSliderStyle (style);
    slider.setRange (start, end, interval);

    if (style != Slider::IncDecButtons)
      slider.setTextBoxStyle (Slider::NoTextBox, false, 0, 0);

    slider.setValue (start + (end - start) * juce::Random::getSystemRandom().nextDouble());

    addAndMakeVisible (slider);
  };

  setUpSlider (rotarySlider, Slider::Rotary, 1.0, 500.0, 1.0);
}
SliderComponent::~SliderComponent(){}

void SliderComponent::resized()
{
  juce::Grid grid;

  grid.templateRows = { juce::Grid::TrackInfo (juce::Grid::Fr (1)), juce::Grid::TrackInfo (juce::Grid::Fr (2)) };

  grid.templateColumns = { juce::Grid::TrackInfo (juce::Grid::Fr (1)) };

  grid.items.add (juce::GridItem (rotarySlider).withMargin ({ 2 }));

  grid.performLayout (getLocalBounds());
}