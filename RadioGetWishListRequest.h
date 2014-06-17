/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class SSURLConnectionRequest;

@interface RadioGetWishListRequest : RadioRequest  {
    SSURLConnectionRequest *_request;
    unsigned int _maxNumberOfTracks;
}

@property unsigned int maxNumberOfTracks;


- (void)setMaxNumberOfTracks:(unsigned int)arg1;
- (unsigned int)maxNumberOfTracks;
- (void)startWithCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (id)init;

@end
