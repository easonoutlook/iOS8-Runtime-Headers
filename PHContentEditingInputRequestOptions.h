/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PHContentEditingInputRequestOptions : NSObject  {
    BOOL _networkAccessAllowed;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _canHandleAdjustmentData;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressHandler;

}

@property(copy) id canHandleAdjustmentData;
@property(getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property(copy) id progressHandler;


- (id)progressHandler;
- (void)setProgressHandler:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCanHandleAdjustmentData:(id)arg1;
- (void)setNetworkAccessAllowed:(BOOL)arg1;
- (id)canHandleAdjustmentData;
- (BOOL)isNetworkAccessAllowed;

@end
