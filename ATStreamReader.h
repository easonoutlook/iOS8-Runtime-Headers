/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSInputStream, NSObject<OS_dispatch_queue>;

@interface ATStreamReader : NSObject <NSStreamDelegate> {
    BOOL _closeOnStop;
    struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; } *_zstreamp;
    BOOL _compress;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didReadDataBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didFinishReadingBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _didEncounterErrorBlock;

    unsigned int _maximumBufferSize;
    NSInputStream *_stream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy) id didReadDataBlock;
@property(copy) id didFinishReadingBlock;
@property(copy) id didEncounterErrorBlock;
@property unsigned int maximumBufferSize;
@property(getter=shouldCompress) BOOL compress;
@property(retain) NSInputStream * stream;
@property(retain) NSObject<OS_dispatch_queue> * queue;


- (BOOL)shouldCompress;
- (id)stream;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void)readAllDataWithCompletion:(id)arg1;
- (id)initWithInputStream:(id)arg1 queue:(id)arg2;
- (void)setStream:(id)arg1;
- (id)readAllDataWithError:(id*)arg1;
- (id)_compressedDataForData:(id)arg1;
- (id)didFinishReadingBlock;
- (void)setDidFinishReadingBlock:(id)arg1;
- (void)setCompress:(BOOL)arg1;
- (id)didEncounterErrorBlock;
- (void)setMaximumBufferSize:(unsigned int)arg1;
- (unsigned int)maximumBufferSize;
- (void)setDidEncounterErrorBlock:(id)arg1;
- (void)setDidReadDataBlock:(id)arg1;
- (id)didReadDataBlock;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;

@end
