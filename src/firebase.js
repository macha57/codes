import firebase from "firebase";

const firebaseConfig = {
    apiKey: "AIzaSyBOq3_hYU0VjAZL60kGBNtey_1zRNVfzdc",
    authDomain: "facebook-clone-9937e.firebaseapp.com",
    databaseURL: "https://facebook-clone-9937e.firebaseio.com",
    projectId: "facebook-clone-9937e",
    storageBucket: "facebook-clone-9937e.appspot.com",
    messagingSenderId: "606348438408",
    appId: "1:606348438408:web:0cc542ad7b8825ad1be83d",
    measurementId: "G-0CBS86RX4V"
  };

  const firebaseApp = firebase.initializeApp(firebaseConfig);
  const db = firebaseApp.firestore();
  const auth = firebase.auth();
  const provider = new firebase.auth.GoogleAuthProvider();



  export { auth, provider};
  export default db;