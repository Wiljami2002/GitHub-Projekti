
#pragma once

#include <JuceHeader.h>

//==============================================================================
//==============================================================================
//==============================================================================
//==============================================================================

// TOMAS CODE IS HERE

//==============================================================================
template <typename Type>
class Distortion
{
public:
    //==============================================================================
    Distortion()
                {
        auto& waveshaper = processorChain.template get<waveshaperIndex>();
        waveshaper.functionToUse = [] (Type x)
                                   {
                                       return std::tanh (x);           // [4]
                                   };
 
        auto& preGain = processorChain.template get<preGainIndex>();   // [5]
        preGain.setGainDecibels (dial1);                               // [6]
 
        auto& postGain = processorChain.template get<postGainIndex>(); // [7]
        postGain.setGainDecibels (5.0f);                             // [8]
    }
 
    
    //==============================================================================
    //PREPARE//=====================================================================
    //==============================================================================
    
   void prepare (const juce::dsp::ProcessSpec& spec)
    {
        auto& filter = processorChain.template get<filterIndex>();
        filter.state = FilterCoefs::makeFirstOrderHighPass (spec.sampleRate, 1000.0f);

        processorChain.prepare (spec);
    }
    //==============================================================================
    //PROCESS//=====================================================================
    //==============================================================================
    
    template <typename ProcessContext>
    void process (const ProcessContext& context) noexcept
    {
        processorChain.process (context);
    }

    //==============================================================================
    // RESET//======================================================================
    //==============================================================================
    
    void reset() noexcept
{
    processorChain.reset();        // [3]
}

private:
    //==============================================================================
    enum
    {
        filterIndex,
        preGainIndex,
        waveshaperIndex,
        postGainIndex
    };

    using Filter = juce::dsp::IIR::Filter<Type>;
    using FilterCoefs = juce::dsp::IIR::Coefficients<Type>;

    juce::dsp::ProcessorChain<juce::dsp::ProcessorDuplicator<Filter, FilterCoefs>,
                              juce::dsp::Gain<Type>, juce::dsp::WaveShaper<Type>, juce::dsp::Gain<Type>> processorChain;
};
    
                    //TOMAS CODE Ends HERE


//==============================================================================
//==============================================================================
//==============================================================================
//==============================================================================



class RamaprojektiAudioProcessor  : public AudioProcessor
{
public:
    //==============================================================================
    RamaprojektiAudioProcessor();
    ~RamaprojektiAudioProcessor();

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

   #ifndef JucePlugin_PreferredChannelConfigurations
    bool isBusesLayoutSupported (const BusesLayout& layouts) const override;
   #endif

    void processBlock (AudioBuffer<float>&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;

private:
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (RamaprojektiAudioProcessor)
};
