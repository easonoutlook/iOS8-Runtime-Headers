/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@class NSData, NSDictionary;

@interface FCRFace : NSObject  {
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    } face;
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    } leftEye;
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    } rightEye;
    struct { 
        struct CGPoint { 
            float x; 
            float y; 
        } center; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } bounds; 
    } mouth;
    float faceSize;
    float faceAngle;
    int trackID;
    unsigned int trackDuration;
    NSData *faceprint;
    int faceType;
    NSDictionary *faceLandmarkPoints;
    NSDictionary *expressionFeatures;
    NSDictionary *additionalInfo;
}

@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } face;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } leftEye;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } rightEye;
@property struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; } mouth;
@property float faceSize;
@property float faceAngle;
@property int trackID;
@property unsigned int trackDuration;
@property(retain) NSData * faceprint;
@property int faceType;
@property(retain) NSDictionary * faceLandmarkPoints;
@property(retain) NSDictionary * expressionFeatures;
@property(retain) NSDictionary * additionalInfo;
@property(readonly) BOOL hasLeftEyeBounds;
@property(readonly) BOOL hasRightEyeBounds;
@property(readonly) BOOL hasMouthBounds;


- (void)setFace:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })face;
- (int)trackID;
- (void)setAdditionalInfo:(id)arg1;
- (id)additionalInfo;
- (void)setTrackDuration:(unsigned int)arg1;
- (void)setFaceprint:(id)arg1;
- (id)faceprint;
- (void)setFaceLandmarkPoints:(id)arg1;
- (id)faceLandmarkPoints;
- (BOOL)hasMouthBounds;
- (BOOL)hasRightEyeBounds;
- (BOOL)hasLeftEyeBounds;
- (void)dealloc;
- (float)faceSize;
- (unsigned int)trackDuration;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })mouth;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })rightEye;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })leftEye;
- (id)expressionFeatures;
- (void)setMouth:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setRightEye:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setLeftEye:(struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; })arg1;
- (void)setExpressionFeatures:(id)arg1;
- (int)faceType;
- (void)setFaceSize:(float)arg1;
- (void)setFaceType:(int)arg1;
- (float)faceAngle;
- (void)setFaceAngle:(float)arg1;
- (void)setTrackID:(int)arg1;

@end
