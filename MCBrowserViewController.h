/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@class MCSession, NSBundle, UINavigationBar, <MCBrowserViewControllerDelegate>, UITableView, NSMutableArray, MCPeerID, UIBarButtonItem, NSMutableDictionary, MCNearbyServiceBrowser;

@interface MCBrowserViewController : UIViewController <MCSessionPrivateDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UINavigationBarDelegate, MCNearbyServiceBrowserDelegate> {
    <MCBrowserViewControllerDelegate> *_delegate;
    MCNearbyServiceBrowser *_browser;
    MCSession *_session;
    unsigned int _minimumNumberOfPeers;
    unsigned int _maximumNumberOfPeers;
    MCPeerID *_myPeerID;
    UITableView *_tableView;
    NSMutableArray *_nearbyPeersSection;
    NSMutableArray *_invitedPeersSection;
    NSMutableDictionary *_invitedPeersState;
    NSMutableArray *_foundPeers;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    UINavigationBar *_navigationBar;
    NSBundle *_frameworkBundle;
    unsigned int _declinedPeersCount;
}

@property <MCBrowserViewControllerDelegate> * delegate;
@property(retain) MCNearbyServiceBrowser * browser;
@property(retain) MCSession * session;
@property unsigned int minimumNumberOfPeers;
@property unsigned int maximumNumberOfPeers;
@property(copy) MCPeerID * myPeerID;
@property(retain) UITableView * tableView;
@property(retain) NSMutableArray * nearbyPeersSection;
@property(retain) NSMutableArray * invitedPeersSection;
@property(retain) NSMutableDictionary * invitedPeersState;
@property(retain) NSMutableArray * foundPeers;
@property(retain) UIBarButtonItem * doneButton;
@property(retain) UIBarButtonItem * cancelButton;
@property(retain) UINavigationBar * navigationBar;
@property(retain) NSBundle * frameworkBundle;
@property unsigned int declinedPeersCount;
@property(readonly) BOOL maximumNumberOfPeersReached;
@property(readonly) BOOL minimumNumberOfPeersReached;


- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)tableView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setTableView:(id)arg1;
- (int)positionForBar:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)navigationBar;
- (id)delegate;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)setFrameworkBundle:(id)arg1;
- (id)frameworkBundle;
- (void)setFoundPeers:(id)arg1;
- (void)setInvitedPeersState:(id)arg1;
- (void)setInvitedPeersSection:(id)arg1;
- (void)setNearbyPeersSection:(id)arg1;
- (void)setMyPeerID:(id)arg1;
- (void)setBrowser:(id)arg1;
- (void)cancelTapped:(id)arg1;
- (void)doneTapped:(id)arg1;
- (void)setMaximumNumberOfPeers:(unsigned int)arg1;
- (void)setMinimumNumberOfPeers:(unsigned int)arg1;
- (id)initWithServiceType:(id)arg1 session:(id)arg2;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)verifyPeerIsAccountedFor:(id)arg1;
- (id)detailStringForPeerState:(int)arg1;
- (id)nearbySectionTitle;
- (BOOL)maximumNumberOfPeersReached;
- (BOOL)minimumNumberOfPeersReached;
- (void)peerJoinedSession;
- (unsigned int)declinedPeersCount;
- (void)peer:(id)arg1 changedStateTo:(int)arg2;
- (void)setDeclinedPeersCount:(unsigned int)arg1;
- (id)foundPeers;
- (id)invitedPeersState;
- (id)invitedPeersSection;
- (id)nearbyPeersSection;
- (unsigned int)maximumNumberOfPeers;
- (unsigned int)minimumNumberOfPeers;
- (id)browser;
- (id)initWithBrowser:(id)arg1 session:(id)arg2;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(BOOL*)arg5;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(BOOL*)arg5;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(BOOL*)arg4;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 propagate:(BOOL*)arg4;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(BOOL*)arg6;
- (id)myPeerID;
- (id)description;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)setSession:(id)arg1;
- (id)session;

@end
