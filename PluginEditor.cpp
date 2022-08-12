#include "PluginEditor.h"

//==============================================================================
AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), processorRef (p)
{
    juce::ignoreUnused (processorRef);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    //addAndMakeVisible(m_bar);
    addAndMakeVisible(m_slider);
    setSize (400, 600);
}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor()
{
}

//==============================================================================
void AudioPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    //g.fillAll(juce::Colours::black);

    //g.setColour (juce::Colours::white);
    //g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
    //g.setColour(juce::Colours::white);
}

void AudioPluginAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

   /* auto bounds = getLocalBounds();
    bounds.removeFromTop(4);
    float hRatio = 25.f / 100.f; //JUCE_LIVE_CONSTANT(25) / 100.f;
    auto responseArea = bounds.removeFromTop(bounds.getHeight() * hRatio); //change from 0.33 to 0.25 because I needed peak hz text to not overlap the slider thumb

    m_bar.setBounds(responseArea);*/

    juce::Grid grid;

    grid.templateRows = { juce::Grid::TrackInfo (juce::Grid::Fr (1)) };
    grid.templateColumns = { juce::Grid::TrackInfo (juce::Grid::Fr (1)) };

    grid.items = { juce::GridItem (m_slider).withMargin ({ 2 }) };

    grid.performLayout (getLocalBounds());
}
