/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    long long *_persistentIDs;
    BOOL _shouldContain;
    unsigned int _count;
}

@property(readonly) unsigned int count;
@property(readonly) const long long* persistentIDs;
@property(readonly) BOOL shouldContain;

+ (id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned int)arg2 shouldContain:(BOOL)arg3;

- (BOOL)shouldContain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (const long long*)persistentIDs;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;

@end
