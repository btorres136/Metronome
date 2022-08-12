#ifndef SLIDERCOMPONENT
#define SLIDERCOMPONENT

#include "juce_gui_basics/juce_gui_basics.h"

class SliderComponent : public juce::Slider
{
  public:
    SliderComponent();
    ~SliderComponent();
    void resized() override;

  private:
    Slider rotarySlider;
};

#endif