#ifndef BARCOMPONENT
#define BARCOMPONENT

#include "juce_gui_basics/juce_gui_basics.h"

class BarComponent : public juce::Component
{
  public:
    BarComponent();
    ~BarComponent();
    void paint(juce::Graphics& g) override;


};

#endif