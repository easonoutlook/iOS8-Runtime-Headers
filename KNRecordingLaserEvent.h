/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface KNRecordingLaserEvent : KNRecordingEvent  {
    struct CGPoint { 
        float x; 
        float y; 
    } mUnitLocation;
}

@property(readonly) struct CGPoint { float x1; float x2; } unitLocation;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithContext:(id)arg1 archive:(const struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; double x3; struct RecordingNavigationEventArchive {} *x4; struct RecordingLaserEventArchive {} *x5; struct RecordingPauseEventArchive {} *x6; struct RecordingMovieEventArchive {} *x7; int x8; unsigned int x9[1]; }*)arg2 unarchiver:(id)arg3;
- (struct CGPoint { float x1; float x2; })unitLocation;
- (id)initWithStartTime:(double)arg1 unitLocation:(struct CGPoint { float x1; float x2; })arg2;
- (id)initWithStartTime:(double)arg1;
- (void)saveToArchive:(struct RecordingEventArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; double x3; struct RecordingNavigationEventArchive {} *x4; struct RecordingLaserEventArchive {} *x5; struct RecordingPauseEventArchive {} *x6; struct RecordingMovieEventArchive {} *x7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;

@end
