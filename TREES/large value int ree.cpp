class Solution {
  public:
    vector<int> largestValues(Node* root) {
        if (root == nullptr) return {};

        queue<Node*> q;
        q.push(root);

        int mx = INT_MIN;

        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();

            mx = max(mx, temp->data);

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }

        return {mx};
    }
};