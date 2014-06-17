/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDDataLabel, OADGraphicProperties, CHDMarker;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    unsigned int mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataValueProperties;

- (unsigned int)dataValueIndex;
- (id)dataLabel;
- (id)shallowCopyWithIndex:(unsigned int)arg1;
- (void)setDataLabel:(id)arg1;
- (void)setMarker:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setDataValueIndex:(unsigned int)arg1;
- (id)marker;
- (id)graphicProperties;
- (int)key;
- (void)dealloc;
- (id)init;

@end
