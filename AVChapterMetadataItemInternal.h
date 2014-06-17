/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, NSLocale, NSString, AVWeakReference, <NSObject><NSCopying>, NSMutableArray;

@interface AVChapterMetadataItemInternal : NSObject  {
    AVWeakReference *weakReference;
    struct OpaqueFigAsset { } *figAsset;
    long chapterGroupIndex;
    long chapterIndex;
    NSString *chapterType;
    NSLocale *locale;
    NSString *chapterDataType;
    <NSObject><NSCopying> *value;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } time;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } duration;
    int valueStatus;
    long valueErrorCode;
    NSMutableArray *completions;
    NSObject<OS_dispatch_queue> *readWriteQueue;
}



@end
