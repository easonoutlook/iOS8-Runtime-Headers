/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSURL;

@interface OADLinkedMediaFile : OADMovie  {
    NSURL *mUrl;
    BOOL mIsExternal;
}

@property(retain) NSURL * url;
@property BOOL isExternal;


- (void)setIsExternal:(BOOL)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (BOOL)isExternal;
- (void)dealloc;

@end
