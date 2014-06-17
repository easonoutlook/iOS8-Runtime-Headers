/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBSectionInfo;

@interface BBParentSectionDataProviderFactory : NSObject <BBDataProviderFactory, NSSecureCoding> {
    BBSectionInfo *_sectionInfo;
}

@property(copy) BBSectionInfo * sectionInfo;

+ (id)factoryFromSectionInfo:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setSectionInfo:(id)arg1;
- (id)initWithSectionInfo:(id)arg1;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (id)dataProviders;
- (id)sectionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)sectionInfo;

@end
