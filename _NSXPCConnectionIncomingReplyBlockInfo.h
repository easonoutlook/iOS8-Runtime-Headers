/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSProgress;

@interface _NSXPCConnectionIncomingReplyBlockInfo : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cleanupBlock;

    NSProgress *_progress;
}

@property(copy) id cleanupBlock;
@property(retain) NSProgress * progress;


- (id)progress;
- (void)setProgress:(id)arg1;
- (void)dealloc;
- (void)setCleanupBlock:(id)arg1;
- (id)cleanupBlock;

@end
