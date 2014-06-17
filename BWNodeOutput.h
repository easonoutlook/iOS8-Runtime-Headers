/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWVideoFormat, BWNodeConnection, BWNode, BWFormat, NSString, BWPixelBufferPool, BWFormatRequirements, <BWNodeOutputConsumer>;

@interface BWNodeOutput : NSObject  {
    NSString *_name;
    <BWNodeOutputConsumer> *_consumer;
    BOOL _consumerIsANodeConnection;
    BOOL _mediaTypeIsVideo;
    BWFormatRequirements *_formatRequirements;
    BWFormat *_format;
    long long _configurationID;
    BWPixelBufferPool *_preparedPixelBufferPool;
    unsigned long _preparedBufferPoolSize;
    BWPixelBufferPool *_livePixelBufferPool;
    unsigned long _livePixelBufferPoolSize;
    unsigned long _mediaType;
    BWNode *_node;
    BOOL _providesPixelBufferPool;
    BOOL _buffersOriginateUpstream;
    int _indexOfInputWhichDrivesThisOutput;
    unsigned long _retainedBufferCount;
    unsigned long _owningNodeRetainedBufferCount;
    BWFormat *_liveFormat;
    long long _liveConfigurationID;
    unsigned int _numberOfBuffersEmitted;
    unsigned int _numberOfBuffersDropped;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _lastEmittedPTS;
    float _maxSampleDataOutputRate;
}

@property(copy) NSString * name;
@property(readonly) unsigned long mediaType;
@property(readonly) BWNode * node;
@property <BWNodeOutputConsumer> * consumer;
@property(readonly) BWNodeConnection * connection;
@property(copy) BWFormatRequirements * formatRequirements;
@property(copy) BWFormat * format;
@property(readonly) BWVideoFormat * videoFormat;
@property long long configurationID;
@property BOOL providesPixelBufferPool;
@property BOOL buffersOriginateUpstream;
@property int indexOfInputWhichDrivesThisOutput;
@property unsigned long retainedBufferCount;
@property unsigned long owningNodeRetainedBufferCount;
@property float maxSampleDataOutputRate;
@property(retain) BWFormat * liveFormat;
@property(readonly) long long liveConfigurationID;
@property(readonly) BWPixelBufferPool * livePixelBufferPool;
@property(readonly) unsigned int numberOfBuffersEmitted;
@property(readonly) unsigned int numberOfBuffersDropped;

+ (void)initialize;

- (void)setMaxSampleDataOutputRate:(float)arg1;
- (float)maxSampleDataOutputRate;
- (unsigned int)numberOfBuffersEmitted;
- (void)setOwningNodeRetainedBufferCount:(unsigned long)arg1;
- (unsigned long)owningNodeRetainedBufferCount;
- (void)setIndexOfInputWhichDrivesThisOutput:(int)arg1;
- (int)indexOfInputWhichDrivesThisOutput;
- (void)setBuffersOriginateUpstream:(BOOL)arg1;
- (BOOL)buffersOriginateUpstream;
- (BOOL)providesPixelBufferPool;
- (void)emitNodeError:(id)arg1;
- (id)livePixelBufferPool;
- (void)prepareForConfiguredFormatToBecomeLive;
- (id)consumer;
- (void)setConsumer:(id)arg1;
- (BOOL)_emitMessage:(id)arg1;
- (unsigned int)numberOfBuffersDropped;
- (long long)liveConfigurationID;
- (id)liveFormat;
- (void)setRetainedBufferCount:(unsigned long)arg1;
- (unsigned long)retainedBufferCount;
- (void)setConfigurationID:(long long)arg1;
- (id)format;
- (id)formatRequirements;
- (long long)configurationID;
- (void)setLiveFormat:(id)arg1;
- (id)videoFormat;
- (void)setProvidesPixelBufferPool:(BOOL)arg1;
- (void)emitSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)markEndOfLiveOutput;
- (void)makeConfiguredFormatLive;
- (unsigned long)mediaType;
- (void)setFormat:(id)arg1;
- (void)setFormatRequirements:(id)arg1;
- (id)initWithMediaType:(unsigned long)arg1 node:(id)arg2;
- (id)connection;
- (id)node;
- (void)invalidate;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;

@end
