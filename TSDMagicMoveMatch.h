/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDTextureContext, TSDMagicMoveMatchObject, NSString;

@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch> {
    TSDMagicMoveMatchObject *_outgoingObject;
    TSDMagicMoveMatchObject *_incomingObject;
    int _matchType;
    float _distance;
    float _zOrderDistance;
    float _attributeMatchPercent;
    TSDTextureContext *_textureContext;
    int _matchCost;
    NSString *_name;
}

@property(readonly) TSDMagicMoveMatchObject * outgoingObject;
@property(readonly) TSDMagicMoveMatchObject * incomingObject;
@property int matchType;
@property float distance;
@property float zOrderDistance;
@property float attributeMatchPercent;
@property(retain) TSDTextureContext * textureContext;
@property(readonly) int matchCost;
@property(retain) NSString * name;
@property(readonly) BOOL isTextMatch;
@property(readonly) id incomingMatchObject;
@property(readonly) id outgoingMatchObject;

+ (id)matchWithOutgoingObject:(id)arg1 incomingObject:(id)arg2 matchType:(int)arg3 attributeMatchPercent:(float)arg4 textureContext:(id)arg5;

- (int)matchType;
- (float)distance;
- (void)setDistance:(float)arg1;
- (void)setMatchType:(int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)isTextMatch;
- (id)outgoingMatchObject;
- (id)incomingMatchObject;
- (BOOL)conflictsWithMatch:(id)arg1;
- (int)compareToMatch:(id)arg1;
- (float)zOrderDistance;
- (float)attributeMatchPercent;
- (int)matchCost;
- (void)setZOrderDistance:(float)arg1;
- (void)setAttributeMatchPercent:(float)arg1;
- (void)p_updateMagicMoveCost;
- (id)incomingObject;
- (id)outgoingObject;
- (id)textureContext;
- (void)setTextureContext:(id)arg1;

@end
