/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSLock;

@interface MFWeakObjectCache : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}


- (id)objectForKey:(id)arg1 wasCached:(BOOL*)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(id)arg1;

@end
