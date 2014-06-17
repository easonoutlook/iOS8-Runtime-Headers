/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OISFUZipArchive, NSMutableDictionary;

@interface OCPZipPackage : OCPPackage  {
    OISFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}


- (id)initWithArchive:(id)arg1;
- (void)resetPartForLocation:(id)arg1;
- (id)partForLocation:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end