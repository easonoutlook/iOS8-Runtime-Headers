/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDGroupInfo, <TSDSubcommandProvider>, NSArray;

@interface TSDBaseGroupCommand : TSKCommand  {
    NSArray *mDrawables;
    TSDGroupInfo *mGroup;
    <TSDSubcommandProvider> *mSubcommandProvider;
}

@property(readonly) NSArray * drawables;
@property(readonly) TSDGroupInfo * group;


- (id)drawables;
- (BOOL)process;
- (id)group;
- (void)dealloc;
- (BOOL)canCoalesceWithCommand:(id)arg1;

@end