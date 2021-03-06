/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPHomeSharingML3DataProvider, NSError, SSRentalCheckoutRequest;

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
    unsigned long long _accountID;
    MPHomeSharingML3DataProvider *_dataProvider;
    NSError *_error;
    unsigned long long _itemID;
    unsigned long long _homeSharingID;
    unsigned long long _rentalID;
    SSRentalCheckoutRequest *_request;
}

@property(retain) MPHomeSharingML3DataProvider * dataProvider;
@property(readonly) unsigned long long itemID;


- (unsigned long long)itemID;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)_errorIsFairPlayError:(id)arg1;
- (id)initWithItemID:(unsigned long long)arg1 homeSharingID:(unsigned long long)arg2 rentalID:(unsigned long long)arg3 accountID:(unsigned long long)arg4;
- (void)resolveError:(id)arg1;

@end
