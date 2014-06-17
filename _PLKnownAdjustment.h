/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSIndexSet;

@interface _PLKnownAdjustment : NSObject  {
    NSString *_identifier;
    NSIndexSet *_supportedVersions;
    int _supportLevel;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _settingsExtractionBlock;

}

@property(copy) NSString * identifier;
@property(copy) NSIndexSet * supportedVersions;
@property int supportLevel;
@property(copy) id settingsExtractionBlock;


- (void)setSettingsExtractionBlock:(id)arg1;
- (id)settingsExtractionBlock;
- (void)setSupportLevel:(int)arg1;
- (int)supportLevel;
- (void)setSupportedVersions:(id)arg1;
- (id)supportedVersions;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)description;

@end
